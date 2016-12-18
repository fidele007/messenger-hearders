/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBNetworkImageViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNMontageArtPickerFilterApplyListener.h>

@protocol MNMediaFilterAssetManagerProviding;
@class MNMediaFilterDescriptor, UIImageView, FBNetworkImageView, UIActivityIndicatorView, FBCircularProgressView, NSString;

@interface MNMontageArtPickerFilterDescriptorCollectionViewCell : UICollectionViewCell <FBNetworkImageViewDelegate, FBClassProvidable, MNMontageArtPickerFilterApplyListener> {

	id<MNMediaFilterAssetManagerProviding> _filterAssetManagerProvider;
	MNMediaFilterDescriptor* _filterDescriptor;
	UIImageView* _resourcesNotLoadedImageView;
	FBNetworkImageView* _networkImageView;
	UIActivityIndicatorView* _networkImageLoadingIndicatorView;
	FBCircularProgressView* _applyProgressView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithImageDownloader:(id)arg1 ;
-(void)networkImageViewDidLoadImage:(id)arg1 ;
-(void)mediaFiltersManagerWillCancelApplyingFilterForDescriptor:(id)arg1 ;
-(void)mediaFiltersManagerDidCancelApplyingFilterForDescriptor:(id)arg1 error:(id)arg2 ;
-(void)mediaFiltersManagerWillBeginApplyingFilterForDescriptor:(id)arg1 ;
-(void)mediaFiltersManagerIsApplyingFilterForDescriptor:(id)arg1 withProgress:(float)arg2 ;
-(void)mediaFiltersManagerDidFinishApplyingFilterForDescriptor:(id)arg1 error:(id)arg2 ;
-(void)setupWithFilterDescriptor:(id)arg1 filterAssetManagerProvider:(id)arg2 ;
-(void)_prepareSubviewsForReuse;
-(void)_startDisplayingApplyProgress;
-(void)_didFinishApplyingFilter;
-(void)_endDisplayingApplyProgress;
-(id)filterDescriptor;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
@end

