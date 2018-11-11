//
// Created by dzordzu on 11.11.18.
// TODO Add header implementation
//

#ifndef GETSET

#define GETSET(type, var) \
    private: \
       type _##var; \
    public: \
       type get##var() const\
       {\
          return _##var; \
       }\
       void set##var(type val) \
       {\
          _##var = val; \
       }

#endif //GETSET

#ifndef GET

#define GET(type, var) \
    private: \
       type _##var; \
    public: \
       type get##var() \
       {\
          return _##var; \
       }

#endif //GET

#ifndef SET

#define SET(type, var) \
    private: \
       type _##var; \
    public: \
       type set##var() \
       {\
          return _##var; \
       }

#endif //SET