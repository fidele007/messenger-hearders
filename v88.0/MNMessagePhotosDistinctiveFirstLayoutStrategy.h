/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessagePhotosLayoutStrategy.h>

@class MNMessageSinglePhotoLayoutStrategy, MNMessagePhotosGridLayoutStrategy, NSString;

@interface MNMessagePhotosDistinctiveFirstLayoutStrategy : NSObject <MNMessagePhotosLayoutStrategy> {

	MNMessageSinglePhotoLayoutStrategy* _singlePhotoLayoutStrategy;
	MNMessagePhotosGridLayoutStrategy* _gridLayoutStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)sizeForPhotoViewModels:(id)arg1 maxSize:(CGSize)arg2 ;
-(id)layoutSpecsForPhotoViewModels:(id)arg1 bounds:(CGRect)arg2 boundingTopLeftRadius:(double)arg3 boundingTopRightRadius:(double)arg4 boundingBottomLeftRadius:(double)arg5 boundingBottomRightRadius:(double)arg6 outerRadius:(double)arg7 innerRadius:(double)arg8 alignsToRight:(BOOL)arg9 ;
-(id)_photosLayoutStrategyForOtherViewModelsCount:(unsigned long long)arg1 ;
-(id)init;
@end

