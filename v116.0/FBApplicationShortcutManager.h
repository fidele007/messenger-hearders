/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInvalidating.h>

@protocol FBApplicationShortcutPresenting;
@class FBSetRegistry, NSMutableSet, NSString;

@interface FBApplicationShortcutManager : NSObject <FBInvalidating> {

	id<FBApplicationShortcutPresenting> _shortcutPresenter;
	FBSetRegistry* _shortcutRegistry;
	NSMutableSet* _managedShortcutIdentifiers;
	BOOL _valid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)registerShortcutItems;
-(id)initWithShortcutPresenter:(id)arg1 shortcutRegistry:(id)arg2 ;
-(void)invalidate;
-(BOOL)isValid;
@end

