/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, FBSession;

@interface FBSessionAuthLogger : NSObject {

	NSString* _ID;
	NSMutableDictionary* _extras;
	FBSession* _session;
	NSString* _authMethod;

}

@property (nonatomic,copy) NSString * ID;                               //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extras;              //@synthesize extras=_extras - In the implementation block
@property (assign,nonatomic) FBSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * authMethod;                       //@synthesize authMethod=_authMethod - In the implementation block
-(void)setExtras:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)extras;
-(void)addExtrasForNextEvent:(id)arg1 ;
-(id)initWithSession:(id)arg1 ID:(id)arg2 authMethod:(id)arg3 ;
-(void)logStartAuth;
-(void)logStartAuthMethod:(id)arg1 ;
-(void)logEndAuthMethodWithResult:(id)arg1 error:(id)arg2 ;
-(void)logEndAuthWithResult:(id)arg1 error:(id)arg2 ;
-(void)setAuthMethod:(NSString *)arg1 ;
-(id)newEventParameters;
-(void)logEvent:(id)arg1 params:(id)arg2 ;
-(void)logEvent:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(NSString *)authMethod;
-(void)dealloc;
-(void)setID:(NSString *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBSession *)session;
-(NSString *)ID;
-(void)setSession:(FBSession *)arg1 ;
@end

