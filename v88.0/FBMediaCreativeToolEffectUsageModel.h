/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString, NSMutableArray;

@interface FBMediaCreativeToolEffectUsageModel : NSObject {

	FBUserSession* _session;
	NSString* _storageKey;
	NSMutableArray* _cache;

}
-(void)_assertEffectID:(id)arg1 ;
-(id)initWithSession:(id)arg1 toolName:(id)arg2 ;
-(BOOL)isEffectUsed:(id)arg1 ;
-(void)setEffectUsed:(id)arg1 ;
@end

