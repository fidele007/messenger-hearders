/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBUserSession, NSMutableDictionary, NSMutableArray, NSMutableSet, FBViewControllerStealingNavigationCoordinator, FBRegistryBasedIntentHandler, NSArray;

@interface FBAppModuleManager : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _idModuleDict;
	NSMutableDictionary* _classModuleDict;
	NSMutableArray* _modules;
	NSMutableDictionary* _hostURLSegueDict;
	NSDictionary* _nativeBookmarkModuleIDDict;
	NSMutableDictionary* _externalUrlSchemeDict;
	NSMutableDictionary* _staticBookmarksIcons;
	NSMutableSet* _modulesThatNeedToRegisterURLSegues;
	NSMutableArray* _URLSegueProviders;
	FBViewControllerStealingNavigationCoordinator* _viewControllerStealingNavigationCoordinator;
	FBRegistryBasedIntentHandler* _intentHandler;

}

@property (nonatomic,copy,readonly) NSArray * modules; 
+(void)setNativeBookmarksConfiguration:(/*function pointer*/void*)arg1 ;
-(id)_moduleForIdentifier:(id)arg1 ;
-(id)_moduleIDForBookmarkType:(id)arg1 bookmarkID:(id)arg2 ;
-(void)registerURLSeguesForModules;
-(void)registerURLSeguesForProviders;
-(void)registerURLSegue:(id)arg1 ;
-(id)initWithSession:(id)arg1 nativeBookmarksMap:(NSDictionary*)arg2 ;
-(NSArray *)modules;
-(void)addModule:(id)arg1 ;
-(void)registerURLSegueProvider:(/*^block*/id)arg1 ;
-(id)moduleForClass:(Class)arg1 ;
-(id)moduleForID:(id)arg1 ;
-(id)handlerForBookmarkType:(id)arg1 bookmarkID:(id)arg2 ;
-(id)_commonURLSchemeUsedByMultipleURLs:(id)arg1 ;
-(id)DO_NOT_USE_viewControllerForURL:(id)arg1 ;
-(BOOL)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 withNavigationCoordinator:(id)arg4 ;
-(id)URLSegueForHost:(id)arg1 ;
-(BOOL)canOpenLoggedOutURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
@end

