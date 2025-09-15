# API

Auth
POST /auth/register -> 201 (User + Token)
{
    email, username, password
}

POST /auth/login -> 200 (User + Token)
{
    email, password
}

GET /auth/me -> 200 (User)
{
    token
}

---

Users
GET /users/{userId} -> 200 (PublicUser)

PUT /users/{userId} -> 200 (User)
{
    displayName, bio
}

---

Movies
GET /movies -> 200 [MovieSummary]
{
    q?, genre?, year?, page?, per_page?
}

GET /movies/{movieId} -> 200 (MovieDetails)

---

Admin (role=admin)
POST /admin/movies -> 201 (MovieId)
{
    title, year, genres[]
}

PUT /admin/movies/{movieId} -> 200

DELETE /admin/movies/{movieId} -> 204

---

Reviews
POST /movies/{movieId}/reviews -> 201 (ReviewId)
{
    rating, body
}

GET /movies/{movieId}/reviews -> 200 [Review]

PUT /reviews/{reviewId} -> 200

DELETE /reviews/{reviewId} -> 204

---

Collections
POST /users/{userId}/collections -> 201 (CollectionId)
{
    title, movieIds[], visibility
}

GET /users/{userId}/collections -> 200 [CollectionSummary]

---

Continue Watching
POST /users/{userId}/watch -> 200
{
    movieId, progressSeconds, lastWatchedAt
}

GET /users/{userId}/watch -> 200 [WatchEntry]

---

Recommendations
GET /users/{userId}/recommendations -> 200 [MovieSummary]
(max 20)

---

Notifications
GET /users/{userId}/notifications -> 200 [Notification]
