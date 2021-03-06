/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@protocol FBFeedPaginatedHScrollComponent;
@class FBFeedHScrollPaginatorComponent;

@interface FBFeedHScrollWithPaginatorComponent : CKCompositeComponent {

	unsigned long long _numDotsPerPage;
	unsigned long long _numTotalItems;
	FBFeedHScrollPaginatorComponent* _paginatorComponent;
	id<FBFeedPaginatedHScrollComponent> _hscrollComponent;

}
+(id)newWithHScrollComponent:(id)arg1 identifier:(id)arg2 numTotalItems:(unsigned long long)arg3 toolbox:(id)arg4 ;
-(void)itemComponentEndDraggingScrollView:(id)arg1 withContext:(id)arg2 ;
-(void)didScrollToItemComponent:(id)arg1 atIndex:(id)arg2 ;
-(void)didTapPaginator:(id)arg1 tapRecognizer:(id)arg2 ;
-(void)didPanPaginator:(id)arg1 panRecognizer:(id)arg2 ;
@end

