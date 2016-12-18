/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBQuicksilverGameIntentTarget : FBIntentTarget {

	NSString* _gameID;
	NSString* _source;
	NSString* _sourceID;
	NSString* _gameUrl;

}

@property (nonatomic,copy,readonly) NSString * gameID;                //@synthesize gameID=_gameID - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * gameUrl;               //@synthesize gameUrl=_gameUrl - In the implementation block
+(id)gameIntentTargetWithGameID:(id)arg1 source:(id)arg2 sourceID:(id)arg3 gameUrl:(id)arg4 ;
-(NSString *)gameID;
-(id)fallbackURLs;
-(NSString *)gameUrl;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)source;
-(NSString *)sourceID;
@end
