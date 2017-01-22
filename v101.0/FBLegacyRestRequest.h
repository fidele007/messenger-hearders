/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFacebookAPIRequest.h>

@class NSString, NSDictionary;

@interface FBLegacyRestRequest : FBFacebookAPIRequest {

	NSString* _method;
	NSString* _httpMethod;
	NSDictionary* _parameters;
	BOOL _signedRequest;
	BOOL _shouldCompressHTTPPostBody;
	BOOL _shouldCompressNSDataInMultipartForm;
	/*^block*/id _responseHandlerFactory;

}

@property (assign,getter=isSignedRequest,nonatomic) BOOL signedRequest;              //@synthesize signedRequest=_signedRequest - In the implementation block
@property (assign,nonatomic) BOOL shouldCompressHTTPPostBody;                        //@synthesize shouldCompressHTTPPostBody=_shouldCompressHTTPPostBody - In the implementation block
@property (assign,nonatomic) BOOL shouldCompressNSDataInMultipartForm;               //@synthesize shouldCompressNSDataInMultipartForm=_shouldCompressNSDataInMultipartForm - In the implementation block
-(id)initWithMethod:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 friendlyName:(id)arg4 callerClass:(Class)arg5 ;
-(void)setSignedRequest:(BOOL)arg1 ;
-(id)initWithMethod:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 ;
-(void)setShouldCompressHTTPPostBody:(BOOL)arg1 ;
-(void)setResponseHandlerFactory:(/*^block*/id)arg1 ;
-(void)setShouldCompressNSDataInMultipartForm:(BOOL)arg1 ;
-(/*^block*/id)responseHandlerFactory;
-(id)methodForSignature;
-(BOOL)useMultipartForm;
-(BOOL)isSignedRequest;
-(BOOL)shouldCompressHTTPPostBody;
-(BOOL)shouldCompressNSDataInMultipartForm;
-(unsigned long long)compressionMethod;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)host;
-(id)parameters;
-(id)httpMethod;
-(id)relativePath;
@end
