/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntitySphericalVideoProtocol.h>

@protocol FBRichStoryEntitySphericalVideoGuidedTourProtocol;
@class NSString;

@interface FBRichStoryEntityVideoSphericalAttributes : NSObject <FBRichStoryEntitySphericalVideoProtocol> {

	double _initialViewHeadingDegrees;
	double _initialViewPitchDegrees;
	double _initialViewRollDegrees;
	double _sphericalPreferredFov;
	NSString* _projectionType;
	id<FBRichStoryEntitySphericalVideoGuidedTourProtocol> _guidedTour;

}

@property (nonatomic,copy) NSString * projectionType;                                                       //@synthesize projectionType=_projectionType - In the implementation block
@property (nonatomic,retain) id<FBRichStoryEntitySphericalVideoGuidedTourProtocol> guidedTour;              //@synthesize guidedTour=_guidedTour - In the implementation block
@property (nonatomic,readonly) double initialViewHeadingDegrees;                                            //@synthesize initialViewHeadingDegrees=_initialViewHeadingDegrees - In the implementation block
@property (nonatomic,readonly) double initialViewPitchDegrees;                                              //@synthesize initialViewPitchDegrees=_initialViewPitchDegrees - In the implementation block
@property (nonatomic,readonly) double initialViewRollDegrees;                                               //@synthesize initialViewRollDegrees=_initialViewRollDegrees - In the implementation block
@property (nonatomic,readonly) double sphericalPreferredFov;                                                //@synthesize sphericalPreferredFov=_sphericalPreferredFov - In the implementation block
-(id<FBRichStoryEntitySphericalVideoGuidedTourProtocol>)guidedTour;
-(NSString *)projectionType;
-(double)initialViewHeadingDegrees;
-(double)initialViewPitchDegrees;
-(double)initialViewRollDegrees;
-(double)sphericalPreferredFov;
-(id)initWithProjectionType:(id)arg1 initialViewHeadingDegrees:(double)arg2 initialViewPitchDegrees:(double)arg3 initialViewRollDegrees:(double)arg4 sphericalPreferredFov:(double)arg5 guidedTour:(id)arg6 ;
-(void)setProjectionType:(NSString *)arg1 ;
-(void)setGuidedTour:(id<FBRichStoryEntitySphericalVideoGuidedTourProtocol>)arg1 ;
@end

