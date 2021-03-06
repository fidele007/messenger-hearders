/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNativeArticlePreloadCoordinating.h>

@protocol OS_dispatch_queue;
@class FBUserSession, NSMutableOrderedSet, NSObject, NSString;

@interface FBNativeArticlePreloadCoordinator : NSObject <FBNativeArticlePreloadCoordinating> {

	FBUserSession* _userSession;
	NSMutableOrderedSet* _configQueue;
	NSObject*<OS_dispatch_queue> _workingQueue;
	BOOL _preloadingEnabled;

}

@property (assign,nonatomic) BOOL preloadingEnabled;                //@synthesize preloadingEnabled=_preloadingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)setPreloadingEnabled:(BOOL)arg1 ;
-(void)preloadWithLoaderTarget:(id)arg1 ;
-(void)_cancelAllPreloads;
-(void)_fireAllPreloads;
-(BOOL)preloadingEnabled;
-(void)dealloc;
@end

