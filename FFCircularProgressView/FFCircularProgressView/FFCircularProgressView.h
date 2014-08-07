//
//  FFCircularProgressBar.h
//  FFCircularProgressBar
//
//  Created by Fabiano Francesconi on 16/07/13.
//  Copyright (c) 2013 Fabiano Francesconi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreGraphics/CoreGraphics.h>

@interface FFCircularProgressView : UIView

/**
 * The progress of the view.
 **/
@property (nonatomic, assign) CGFloat progress;

/**
 * The width of the line used to draw the progress view.
 **/
@property (nonatomic, assign) CGFloat lineWidth;

/**
 * The color of the progress view
 */
@property (nonatomic, strong) UIColor *tintColor;

/**
 * The color of the tick view
 */
@property (nonatomic, strong) UIColor *tickColor;

/**
 * Icon view to be rendered instead of default arrow
 */
@property (nonatomic, strong) UIView* startIconView;

/**
 * Bezier path to be rendered instead of start icon view or default arrow
 */
@property (nonatomic, strong) UIBezierPath* startIconPath;

/**
 * Bezier path to be rendered instead of default stop icon
 */
@property (nonatomic, strong) UIBezierPath* stopIconPath;

/**
 * If a different icon should be rendered instead of the default stop icon (or
 * the stop icon path if provided) when paused is YES, provide a different icon
 * path for that here. Typically, you'd provide an icon that indicates 'resume'
 */
@property (nonatomic, strong) UIBezierPath* pauseIconPath;

/**
 * Set to pause to indicate that the progress view is currently on hold and
 * not expected to have changes to progress. This flag is used to determine
 * whether to show stopIconPath or pauseIconPath when progress > 0 and < 1,
 * but only if pauseIconPath is not nil
 */
@property (readwrite, nonatomic, getter = isPaused) BOOL paused;

/**
 * You can hide the icons which are shown during progress
 */
@property (readwrite) BOOL hideProgressIcons;

/**
 * Make the background layer to spin around its center. This should be called in the main thread.
 */
- (void) startSpinProgressBackgroundLayer;

/**
 * Stop the spinning of the background layer. This should be called in the main thread.
 * WARN: This implementation remove all animations from background layer.
 **/
- (void) stopSpinProgressBackgroundLayer;

@end
