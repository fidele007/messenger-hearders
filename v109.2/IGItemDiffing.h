/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGItemDiffingDelegate;
@class NSSet;

@interface IGItemDiffing : NSObject {

	NSSet* _currentItems;
	id<IGItemDiffingDelegate> _delegate;

}

@property (nonatomic,retain) NSSet * currentItems;                                     //@synthesize currentItems=_currentItems - In the implementation block
@property (nonatomic,__weak,readonly) id<IGItemDiffingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateCurrentItemWithSet:(id)arg1 ;
-(id<IGItemDiffingDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(NSSet *)currentItems;
-(void)setCurrentItems:(NSSet *)arg1 ;
@end

