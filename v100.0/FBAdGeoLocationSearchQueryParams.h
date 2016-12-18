/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, NSNumber;

@interface FBAdGeoLocationSearchQueryParams : FBGraphQLInput {

	NSString* _query;
	NSArray* _locationTypes;
	NSNumber* _defaultRadius;
	NSString* _defaultDistanceUnit;

}

@property (nonatomic,copy) NSString * query;                            //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) NSArray * locationTypes;                     //@synthesize locationTypes=_locationTypes - In the implementation block
@property (nonatomic,copy) NSNumber * defaultRadius;                    //@synthesize defaultRadius=_defaultRadius - In the implementation block
@property (nonatomic,copy) NSString * defaultDistanceUnit;              //@synthesize defaultDistanceUnit=_defaultDistanceUnit - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)defaultRadius;
-(void)setDefaultRadius:(NSNumber *)arg1 ;
-(NSString *)defaultDistanceUnit;
-(void)setDefaultDistanceUnit:(NSString *)arg1 ;
-(NSArray *)locationTypes;
-(void)setLocationTypes:(NSArray *)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
@end

