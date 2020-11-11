void ThetaY_vs_Time_ProjX_5_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  9 17:41:23 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *ThetaY_vs_Time_5_px__27 = new TH1D("ThetaY_vs_Time_5_px__27","500<t<600 us",2700,0,402.1272);
   ThetaY_vs_Time_5_px__27->SetBinContent(2701,18538);
   ThetaY_vs_Time_5_px__27->SetBinError(2701,136.1543);
   ThetaY_vs_Time_5_px__27->SetLineWidth(3);
   ThetaY_vs_Time_5_px__27->GetXaxis()->SetTitle("Track time [#mus]");
   ThetaY_vs_Time_5_px__27->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Time_5_px__27->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Time_5_px__27->GetXaxis()->SetLabelSize(0.04);
   ThetaY_vs_Time_5_px__27->GetXaxis()->SetTitleSize(0.04);
   ThetaY_vs_Time_5_px__27->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_vs_Time_5_px__27->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Time_5_px__27->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Time_5_px__27->GetYaxis()->SetNdivisions(4000510);
   ThetaY_vs_Time_5_px__27->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Time_5_px__27->GetYaxis()->SetTitleSize(0.04);
   ThetaY_vs_Time_5_px__27->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_vs_Time_5_px__27->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Time_5_px__27->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Time_5_px__27->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Time_5_px__27->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Time_5_px__27->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
