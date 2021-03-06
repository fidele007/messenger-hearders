/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUniversalSearchControllerDelegate.h>

@class MNNavigationCoordinator, MNThreadNavigationCoordinator, MNDirectMNavigationCoordinator, NSString;

@interface MNDiscoverySurfaceUniversalSearchDelegate : NSObject <MNUniversalSearchControllerDelegate> {

	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	MNDirectMNavigationCoordinator* _directMNavigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)universalSearchControllerSurfaceForPeopleSearch;
-(void)universalSearchControllerWillBeginSearch:(id)arg1 ;
-(void)universalSearchControllerDidBeginSearch:(id)arg1 ;
-(void)universalSearchControllerWillEndSearch:(id)arg1 ;
-(void)universalSearchControllerDidEndSearch:(id)arg1 ;
-(void)universalSearchController:(id)arg1 didPresentSearchController:(id)arg2 ;
-(void)universalSearchController:(id)arg1 didDismissSearchController:(id)arg2 ;
-(void)universalSearchController:(id)arg1 didSelectSearchThreadWithLocalThreadKey:(id)arg2 sendConversionContextExtraLoggingData:(id)arg3 ;
-(void)universalSearchController:(id)arg1 didSelectSearchResultsWithViewController:(id)arg2 ;
-(void)universalSearchControllerDidSelectSearchDirectM:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 threadNavigationCoordinator:(id)arg2 directMNavigationCoordinator:(id)arg3 ;
@end

