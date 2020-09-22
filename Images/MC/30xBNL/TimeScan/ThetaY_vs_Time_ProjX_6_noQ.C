void ThetaY_vs_Time_ProjX_6_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Sep 18 16:34:58 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH1D *ThetaY_vs_Time_6_px__32 = new TH1D("ThetaY_vs_Time_6_px__32","600<t<700 us",2700,0,402.1272);
   ThetaY_vs_Time_6_px__32->SetBinContent(2701,3966);
   ThetaY_vs_Time_6_px__32->SetBinError(2701,62.97619);
   ThetaY_vs_Time_6_px__32->SetStats(0);
   ThetaY_vs_Time_6_px__32->SetLineWidth(3);
   ThetaY_vs_Time_6_px__32->GetXaxis()->SetTitle("Track time [#mus]");
   ThetaY_vs_Time_6_px__32->GetXaxis()->CenterTitle(true);
   ThetaY_vs_Time_6_px__32->GetXaxis()->SetLabelFont(42);
   ThetaY_vs_Time_6_px__32->GetXaxis()->SetTitleOffset(1.1);
   ThetaY_vs_Time_6_px__32->GetXaxis()->SetTitleFont(42);
   ThetaY_vs_Time_6_px__32->GetYaxis()->CenterTitle(true);
   ThetaY_vs_Time_6_px__32->GetYaxis()->SetNdivisions(4000510);
   ThetaY_vs_Time_6_px__32->GetYaxis()->SetLabelFont(42);
   ThetaY_vs_Time_6_px__32->GetYaxis()->SetLabelSize(0.035);
   ThetaY_vs_Time_6_px__32->GetYaxis()->SetTitleOffset(1.1);
   ThetaY_vs_Time_6_px__32->GetYaxis()->SetTitleFont(42);
   ThetaY_vs_Time_6_px__32->GetZaxis()->SetLabelFont(42);
   ThetaY_vs_Time_6_px__32->GetZaxis()->SetLabelSize(0.035);
   ThetaY_vs_Time_6_px__32->GetZaxis()->SetTitleSize(0.035);
   ThetaY_vs_Time_6_px__32->GetZaxis()->SetTitleOffset(1);
   ThetaY_vs_Time_6_px__32->GetZaxis()->SetTitleFont(42);
   ThetaY_vs_Time_6_px__32->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
