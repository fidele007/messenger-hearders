/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSectionComponentTrackerStateModifying.h>

@class FBSectionComponent, NSString;

@interface FBSectionComponentTrackerChangesetGenerationModification : NSObject <FBSectionComponentTrackerStateModifying> {

	unsigned long long _generationType;
	FBSectionComponent* _previousComponent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState:(FBSectionComponentTrackerState)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithGenerationType:(unsigned long long)arg1 previousComponent:(id)arg2 ;
@end

