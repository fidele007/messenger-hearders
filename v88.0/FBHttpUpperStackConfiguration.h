/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBHttpUpperStackConfiguration.h>

@protocol FBHttpUpperStackConfiguration
@end


@interface FBHttpUpperStackConfiguration : NSObject <FBHttpUpperStackConfiguration> {

	vector<std::__1::function<facebook::tigon::TigonRequestPluginResult (facebook::tigon::TigonRequest *)>, std::__1::allocator<std::__1::function<facebook::tigon::TigonRequestPluginResult (facebook::tigon::TigonRequest *)> > >* _requestPlugins;
	vector<std::__1::function<void (const facebook::tigon::TigonRequest &, const facebook::tigon::TigonResponse &)>, std::__1::allocator<std::__1::function<void (const facebook::tigon::TigonRequest &, const facebook::tigon::TigonResponse &)> > >* _responsePlugins;

}
+(id)invalidInitialConfiguration;
+(id)defaultConfiguration;
-(id)initWithRequestPlugins:(initializer_list<std::__1::function<facebook::tigon::TigonRequestPluginResult (facebook::tigon::TigonRequest *)> >*)arg1 responsePlugins:(initializer_list<std::__1::function<void (const facebook::tigon::TigonRequest &, const facebook::tigon::TigonResponse &)> >*)arg2 ;
-(const vector<std::__1::function<facebook::tigon::TigonRequestPluginResult (facebook::tigon::TigonRequest *)>, std::__1::allocator<std::__1::function<facebook::tigon::TigonRequestPluginResult (facebook::tigon::TigonRequest *)> > >*)requestPlugins;
-(const vector<std::__1::function<void (const facebook::tigon::TigonRequest &, const facebook::tigon::TigonResponse &)>, std::__1::allocator<std::__1::function<void (const facebook::tigon::TigonRequest &, const facebook::tigon::TigonResponse &)> > >*)responsePlugins;
@end
