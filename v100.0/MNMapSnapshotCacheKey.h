/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMapSnapshotViewModel;

@interface MNMapSnapshotCacheKey : FBValueObject <NSCopying> {

	MNMapSnapshotViewModel* _viewModel;
	CGSize _size;

}

@property (nonatomic,copy,readonly) MNMapSnapshotViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) CGSize size;                                          //@synthesize size=_size - In the implementation block
-(id)initWithViewModel:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)size;
-(MNMapSnapshotViewModel *)viewModel;
@end

