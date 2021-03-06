/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray;

@interface FBXRayDetector : NSObject {

	char* _outImg;
	vImage_Buffer* _outBuff;
	Predictor* _predictor;
	NSArray* _concepts;

}
-(id)detectPotentialConceptsWithImage:(id)arg1 ;
-(id)detectPotentialConceptsWithBuffer:(CVBufferRef)arg1 ;
-(float*)_runModel:(CVBufferRef)arg1 ;
-(void)_initPredictorIfNecessary;
-(Predictor*)_createNewCaffePredictor;
-(id)init;
-(void)dealloc;
@end

