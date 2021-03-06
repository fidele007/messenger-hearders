/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBComponentCellAppearanceEventListenerAnnouncer;

@interface FBComponentCellAppearanceTracker : NSObject {

	FBComponentCellAppearanceEventListenerAnnouncer* _announcer;
	map<UIView *, id<NSObject>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, id<NSObject> > > >* _cellToModelMap;
	map<id<NSObject>, UIView *, std::__1::less<id<NSObject> >, std::__1::allocator<std::__1::pair<const id<NSObject>, UIView *> > >* _modelToCellMap;

}
-(void)willVendCell:(id)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)didEndDisplayingCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

