//
// Created by dzordzu on 11.11.18.
// TODO Add header implementation
//

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

#ifndef GETref
#define GETref(type, var) \
    private: \
       type _##var; \
    public: \
       type& get##var() \
       {\
          return _##var; \
       }
#endif //GETref

#ifndef SET
#define SET(type, var) \
    private: \
       type _##var; \
    public: \
       void set##var(type val) \
       {\
          _##var = val; \
       }
#endif //SET

#ifndef SETref
#define SETref(type, var) \
    private: \
       type _##var; \
    public: \
       void set##var(type &val) \
       {\
          _##var = val; \
       }
#endif //SETref



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

#ifndef GETrefSET
#define GETrefSET(type, var) \
    private: \
       type _##var; \
    public: \
       type& get##var()\
       {\
          return _##var; \
       }\
       void set##var(type val) \
       {\
          _##var = val; \
       }
#endif //GETrefSET