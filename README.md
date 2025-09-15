# Not-Found-404

**IEEEMDB** is an online platform that combines a **personal movie diary** with a **social & gamified discovery experience**. It helps users discover movies and shows, track what they’ve watched, write reviews, create collections, and share with friends. Admins can manage the movie catalog and moderate content. The system also supports recommendations and notifications to keep users engaged.

## This repository Contains:

- System design diagrams: data model and high-level architecture.  
- API design and docs. 
- `deep_dive.md` describing scalability.
- A prototype implementation.  

## Functional Requirements
1. **Sign up | Login and User Profile**  
   - User registration, login (email and password), and a profile.

2. **Categories tab (Movies and TV Shows)**  
   - Browse by genre, year, popular/new releases, and “My interests”.

3. **Search**  
   - Search movies and shows by title, actor, director, genre, or tag.

4. **Ratings and Reviews**  
   - Users can rate (0–10) and write reviews for movies/shows; reviews are editable and deletable by their authors.

5. **Collections / Lists**  
   - Users can create, edit, and share custom lists, and lists appear on their profile.

6. **Recommendations**  
   - Recommendation endpoint returns up to 20 suggested movies for a user.

7. **Notifications**  
   - Notifications when a new episode of a series the user follows is released.

8. **Continue Watching**  
   - Track watch progress so users can resume a movie or episode where they left off.


## Non-Functional Requirements
1. **Scalability:** architecture must be able to grow and support many users and a large catalog.  
2. **Availability:** core read paths (movie details, search) should aim for high availability with redundancy.  
3. **Latency:** search, movie details aim for low latency (target: <300–500 ms).  


## Out of Scope
These areas are intentionally left out for the contest demo and are documented as future work:

1. **Advanced security and privacy features:** The demo includes basic authentication and role checks. Full cybersecurity for the cloud, servers and user is future work.  
3. **Comprehensive observability:** Basic logs and health checks are included; while full tracing,metrics,alerts are out of scope for the prototype.  
4. **"Let’s Play" tab**  
   - A playful tab with short movie-related games like guess the movie, every day there is a question, a streak and leaderboard.


## Notes & Rationale
- **Recommendations**: limited to 20 results to reduce payload size and caching complexity for the prototype.  
- **Gamification**: implemented as lightweight features that can be expanded later (points, badges, a simple leaderboard).  
- **Admin**: a minimal admin interface for adding and moderating movies and reviews is part of the demo.

---

## Repo Files:

- `excalidraw/` — architecture and data model diagrams.  
- `docs/api.md` — core APIs.  
- `code/` — prototype backend.  
- `deep_dive.md` — detailed design, scaling plans, and component decisions.  
