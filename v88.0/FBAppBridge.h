/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FBAppBridgeTypeToJSONConverter, NSString;

@interface FBAppBridge : NSObject {

	NSMutableDictionary* _pendingAppCalls;
	NSMutableDictionary* _callbacks;
	FBAppBridgeTypeToJSONConverter* _jsonConverter;
	NSString* _appID;
	NSString* _bundleID;
	NSString* _appName;

}

@property (nonatomic,retain) NSMutableDictionary * pendingAppCalls;                       //@synthesize pendingAppCalls=_pendingAppCalls - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callbacks;                             //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,retain) FBAppBridgeTypeToJSONConverter * jsonConverter;              //@synthesize jsonConverter=_jsonConverter - In the implementation block
@property (nonatomic,copy) NSString * appID;                                              //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * appName;                                            //@synthesize appName=_appName - In the implementation block
+(id)symmetricKeyAndForceRefresh:(BOOL)arg1 ;
+(id)errorFromDictionary:(id)arg1 ;
+(id)appIconFromBundleInfo:(id)arg1 ;
+(id)_coerceValue:(id)arg1 ;
+(void)_copyValueForKey:(id)arg1 fromDictionary:(id)arg2 toDictionary:(id)arg3 ;
+(id)sharedInstance;
-(void)setPendingAppCalls:(NSMutableDictionary *)arg1 ;
-(void)setJsonConverter:(FBAppBridgeTypeToJSONConverter *)arg1 ;
-(void)performDialogAppCall:(id)arg1 bridgeScheme:(id)arg2 session:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addAppMetadataToDictionary:(id)arg1 ;
-(void)invoke:(/*^block*/id)arg1 forFailedAppCall:(id)arg2 withMessage:(id)arg3 ;
-(id)jsonStringFromDictionary:(id)arg1 ;
-(void)trackAppCall:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(FBAppBridgeTypeToJSONConverter *)jsonConverter;
-(void)savePasteboardNames:(id)arg1 forAppCallID:(id)arg2 ;
-(void)stopTrackingCallWithID:(id)arg1 ;
-(id)decryptUrlQueryParams:(id)arg1 method:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
-(BOOL)processResponse:(id)arg1 method:(id)arg2 session:(id)arg3 fallbackHandler:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)pendingAppCalls;
-(id)dictionaryFromJSONString:(id)arg1 ;
-(void)deletePasteboardsForAppCallID:(id)arg1 ;
-(void)dispatchDialogAppCall:(id)arg1 bridgeScheme:(id)arg2 session:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 session:(id)arg3 fallbackHandler:(/*^block*/id)arg4 ;
-(void)handleDidBecomeActive;
-(void)dealloc;
-(id)init;
-(void)setAppID:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSMutableDictionary *)callbacks;
-(NSString *)appName;
-(NSString *)appID;
-(void)setCallbacks:(NSMutableDictionary *)arg1 ;
@end

