/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNRedirectionButtonDisplayCoordinating.h>

@class NSString;

@interface MNDisabledRedirectionButtonDisplayCoordinator : NSObject <MNRedirectionButtonDisplayCoordinating> {

	NSString* _sourceApplication;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * sourceApplication;              //@synthesize sourceApplication=_sourceApplication - In the implementation block
-(void)addRedirectionButtonDisplayCoordinatorListener:(id)arg1 ;
-(id)redirectionButtonToDisplay;
-(BOOL)redirectionEnabled;
-(NSString *)sourceApplication;
-(void)setSourceApplication:(NSString *)arg1 ;
@end

