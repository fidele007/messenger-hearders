/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/BFAppLinkResolving.h>

@class NSMutableDictionary, NSString;

@interface FBAppLinkResolver : NSObject <BFAppLinkResolving> {

	NSMutableDictionary* _cachedLinks;
	long long _userInterfaceIdiom;

}

@property (nonatomic,retain) NSMutableDictionary * cachedLinks;              //@synthesize cachedLinks=_cachedLinks - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;                   //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolver;
-(void)setCachedLinks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedLinks;
-(id)appLinksFromURLsInBackground:(id)arg1 ;
-(id)initWithUserInterfaceIdiom:(long long)arg1 ;
-(id)appLinkFromURLInBackground:(id)arg1 ;
-(long long)userInterfaceIdiom;
-(void)dealloc;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
@end
