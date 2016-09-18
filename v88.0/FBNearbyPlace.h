/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Messenger/FBDescribing.h>

@class NSString, NSNumber, NSURL, FBMemTaggableActivity, NSArray;

@interface FBNearbyPlace : NSObject <NSCoding, NSCopying, FBDescribing> {

	NSString* _name;
	NSString* _shortName;
	NSString* _locationSubtext;
	NSString* _visitorsSubtext;
	NSString* _category;
	NSNumber* _ratingValue;
	NSString* _targetId;
	NSURL* _photoURL;
	unsigned long long _targetType;
	NSString* _taggableActivityIdSuggestionMechanism;
	FBMemTaggableActivity* _taggableActivity;
	NSArray* _entrypointsForFlowing;
	NSString* _checkinSubtext;
	NSString* _eventSubtext;
	NSURL* _eventIconURL;
	NSURL* _categoryIconURL;
	NSString* _searchSubtext;
	NSString* _placeTopicId;
	CLLocationCoordinate2D _coordinates;

}

@property (nonatomic,copy,readonly) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                                          //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationSubtext;                                    //@synthesize locationSubtext=_locationSubtext - In the implementation block
@property (nonatomic,copy,readonly) NSString * visitorsSubtext;                                    //@synthesize visitorsSubtext=_visitorsSubtext - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                                           //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ratingValue;                                        //@synthesize ratingValue=_ratingValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetId;                                           //@synthesize targetId=_targetId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * photoURL;                                              //@synthesize photoURL=_photoURL - In the implementation block
@property (nonatomic,readonly) unsigned long long targetType;                                      //@synthesize targetType=_targetType - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinates;                                 //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,copy,readonly) NSString * taggableActivityIdSuggestionMechanism;              //@synthesize taggableActivityIdSuggestionMechanism=_taggableActivityIdSuggestionMechanism - In the implementation block
@property (nonatomic,readonly) FBMemTaggableActivity * taggableActivity;                           //@synthesize taggableActivity=_taggableActivity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * entrypointsForFlowing;                               //@synthesize entrypointsForFlowing=_entrypointsForFlowing - In the implementation block
@property (nonatomic,copy,readonly) NSString * checkinSubtext;                                     //@synthesize checkinSubtext=_checkinSubtext - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventSubtext;                                       //@synthesize eventSubtext=_eventSubtext - In the implementation block
@property (nonatomic,copy,readonly) NSURL * eventIconURL;                                          //@synthesize eventIconURL=_eventIconURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * categoryIconURL;                                       //@synthesize categoryIconURL=_categoryIconURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchSubtext;                                      //@synthesize searchSubtext=_searchSubtext - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeTopicId;                                       //@synthesize placeTopicId=_placeTopicId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)locationSubtext;
-(NSString *)visitorsSubtext;
-(NSString *)taggableActivityIdSuggestionMechanism;
-(FBMemTaggableActivity *)taggableActivity;
-(NSArray *)entrypointsForFlowing;
-(NSString *)checkinSubtext;
-(NSString *)eventSubtext;
-(NSURL *)eventIconURL;
-(NSURL *)categoryIconURL;
-(NSString *)searchSubtext;
-(NSString *)placeTopicId;
-(id)initWithName:(id)arg1 shortName:(id)arg2 locationSubtext:(id)arg3 visitorsSubtext:(id)arg4 category:(id)arg5 ratingValue:(id)arg6 targetId:(id)arg7 photoURL:(id)arg8 targetType:(unsigned long long)arg9 coordinates:(CLLocationCoordinate2D)arg10 taggableActivityIdSuggestionMechanism:(id)arg11 taggableActivity:(id)arg12 entrypointsForFlowing:(id)arg13 checkinSubtext:(id)arg14 eventSubtext:(id)arg15 eventIconURL:(id)arg16 categoryIconURL:(id)arg17 searchSubtext:(id)arg18 placeTopicId:(id)arg19 ;
-(id)attributedDescription;
-(NSString *)targetId;
-(unsigned long long)targetType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocationCoordinate2D)coordinates;
-(NSURL *)photoURL;
-(NSNumber *)ratingValue;
-(NSString *)shortName;
@end

