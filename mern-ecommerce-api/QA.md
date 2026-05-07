# Section A: Conceptual Understanding

## 1. Why is Express preferred over plain Node HTTP servers for REST APIs?

Express.js is preferred because it abstracts the complexity of the built-in Node.js `http` module. It provides:

- **Robust Routing:** Simple methods (`app.get`, `app.post`) to handle different endpoints.
- **Middleware Support:** A plug-and-play system for handling tasks like authentication, logging, and data parsing.
- **Ease of Use:** Unlike plain Node, which requires manual parsing of streams and complex URL string manipulation, Express handles request and response objects intuitively.

## 2. Designing RESTful routes for products and categories

RESTful design focuses on using nouns for resources and HTTP verbs for actions:

- **Resource Naming:** Use plural nouns like `/products` and `/categories`.
- **Standard Verbs:**
  - `GET /products`: Fetch all products.
  - `POST /products`: Create a new product.
  - `PUT /products/:id`: Update a specific product by its ID.
  - `DELETE /products/:id`: Remove a specific product.
- **Sub-resources:** For categories, use `/categories/:id` to manage specific catalog structures.

## 3. Middleware usage for request validation

Middleware acts as a gatekeeper in the request-response cycle. In the context of validation:

- It intercepts the incoming request before it reaches the controller logic.
- It checks `req.body` to ensure required fields (like price or name) are present and meet specific criteria (e.g., price must be a positive number).
- If validation fails, the middleware returns an error immediately, preventing invalid data from reaching the database.

## 4. JWT authentication flow for protected APIs

The JSON Web Token (JWT) flow follows these steps:

- **Login:** The user sends credentials to the server.
- **Creation:** Upon successful login, the server generates a signed JWT containing user data (like role: "admin").
- **Transmission:** The token is sent back to the client and stored (usually in LocalStorage or a Cookie).
- **Authorization:** For every future request to protected routes, the client sends the token in the Authorization header (`Bearer` scheme).
- **Verification:** The server verifies the token signature and grants access if the token is valid.

## 5. Importance of API contracts before frontend integration

An API contract is a formal agreement (often documented in Swagger or Postman) on how the API will behave. It is critical because:

- **Parallel Development:** Frontend and Backend teams can work simultaneously once the JSON structure (keys and data types) is finalized.
- **Consistency:** It reduces bugs caused by mismatched property names (e.g., frontend expecting `product_id` while backend sends `id`).
- **Testing:** It provides a blueprint for writing automated tests before the actual UI is even built.