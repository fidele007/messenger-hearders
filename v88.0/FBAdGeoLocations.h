/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSArray;

@interface FBAdGeoLocations : FBGraphQLInput {

	NSArray* _fieldsRetainedFromRawSpec;
	NSArray* _countries;
	NSArray* _regionKeys;
	NSArray* _cityKeys;
	NSArray* _zipKeys;
	NSArray* _customLocations;
	NSArray* _locationTypes;

}

@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;              //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSArray * countries;                              //@synthesize countries=_countries - In the implementation block
@property (nonatomic,copy) NSArray * regionKeys;                             //@synthesize regionKeys=_regionKeys - In the implementation block
@property (nonatomic,copy) NSArray * cityKeys;                               //@synthesize cityKeys=_cityKeys - In the implementation block
@property (nonatomic,copy) NSArray * zipKeys;                                //@synthesize zipKeys=_zipKeys - In the implementation block
@property (nonatomic,copy) NSArray * customLocations;                        //@synthesize customLocations=_customLocations - In the implementation block
@property (nonatomic,copy) NSArray * locationTypes;                          //@synthesize locationTypes=_locationTypes - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(NSArray *)regionKeys;
-(void)setRegionKeys:(NSArray *)arg1 ;
-(NSArray *)cityKeys;
-(void)setCityKeys:(NSArray *)arg1 ;
-(NSArray *)zipKeys;
-(void)setZipKeys:(NSArray *)arg1 ;
-(NSArray *)customLocations;
-(void)setCustomLocations:(NSArray *)arg1 ;
-(NSArray *)locationTypes;
-(void)setLocationTypes:(NSArray *)arg1 ;
-(void)setCountries:(NSArray *)arg1 ;
-(NSArray *)countries;
@end
