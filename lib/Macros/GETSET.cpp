//
// Created by dzordzu on 11.11.18.
//

#define GETSET(type, var) \
    private: \
       type _##var; \
    public: \
       type get##var() \
       {\
          return _##var; \
       }\
       void set##var(type val) \
       {\
          _##var = val; \
       }

#define GET(type, var) \
    private: \
       type _##var; \
    public: \
       type get##var() \
       {\
          return _##var; \
       }

#define SET(type, var) \
    private: \
       type _##var; \
    public: \
       type set##var() \
       {\
          return _##var; \
       }