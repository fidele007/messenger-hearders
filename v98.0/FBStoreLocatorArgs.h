/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBViewerCoordinates, FBGeoBoundingBox;

@interface FBStoreLocatorArgs : FBGraphQLInput {

	NSString* _adId;
	NSString* _parentPageId;
	NSString* _pageSetId;
	FBViewerCoordinates* _viewerCoordinates;
	FBGeoBoundingBox* _geoBoundingBox;

}

@property (nonatomic,copy) NSString * adId;                                      //@synthesize adId=_adId - In the implementation block
@property (nonatomic,copy) NSString * parentPageId;                              //@synthesize parentPageId=_parentPageId - In the implementation block
@property (nonatomic,copy) NSString * pageSetId;                                 //@synthesize pageSetId=_pageSetId - In the implementation block
@property (nonatomic,copy) FBViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
@property (nonatomic,copy) FBGeoBoundingBox * geoBoundingBox;                    //@synthesize geoBoundingBox=_geoBoundingBox - In the implementation block
-(void)setViewerCoordinates:(FBViewerCoordinates *)arg1 ;
-(NSString *)adId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBViewerCoordinates *)viewerCoordinates;
-(void)setAdId:(NSString *)arg1 ;
-(NSString *)parentPageId;
-(void)setParentPageId:(NSString *)arg1 ;
-(NSString *)pageSetId;
-(void)setPageSetId:(NSString *)arg1 ;
-(FBGeoBoundingBox *)geoBoundingBox;
-(void)setGeoBoundingBox:(FBGeoBoundingBox *)arg1 ;
@end

