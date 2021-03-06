/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface FBTagSuggestionLoggingData : FBValueObject <NSCopying> {

	NSDictionary* _faceboxesTagSuggestions;
	NSDictionary* _faceboxesTagSuggestionsWithHighConfidence;

}

@property (nonatomic,copy,readonly) NSDictionary * faceboxesTagSuggestions;                                //@synthesize faceboxesTagSuggestions=_faceboxesTagSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * faceboxesTagSuggestionsWithHighConfidence;              //@synthesize faceboxesTagSuggestionsWithHighConfidence=_faceboxesTagSuggestionsWithHighConfidence - In the implementation block
-(NSDictionary *)faceboxesTagSuggestions;
-(NSDictionary *)faceboxesTagSuggestionsWithHighConfidence;
-(id)initWithFaceboxesTagSuggestions:(id)arg1 faceboxesTagSuggestionsWithHighConfidence:(id)arg2 ;
@end

