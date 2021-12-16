void S0_g2_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:54:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__58 = new TH1D("h__58","",51,-0.5123144,0.5119853);
   h__58->SetBinContent(23,2);
   h__58->SetBinContent(24,79);
   h__58->SetBinContent(25,579);
   h__58->SetBinContent(26,319);
   h__58->SetBinContent(27,21);
   h__58->SetEntries(1000);
   h__58->SetStats(0);
   h__58->SetLineWidth(3);
   h__58->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__58->GetXaxis()->CenterTitle(true);
   h__58->GetXaxis()->SetLabelFont(42);
   h__58->GetXaxis()->SetTitleSize(0.04);
   h__58->GetXaxis()->SetTitleOffset(1.1);
   h__58->GetXaxis()->SetTitleFont(42);
   h__58->GetYaxis()->SetTitle("Trials");
   h__58->GetYaxis()->CenterTitle(true);
   h__58->GetYaxis()->SetNdivisions(4000510);
   h__58->GetYaxis()->SetLabelFont(42);
   h__58->GetYaxis()->SetTitleSize(0.04);
   h__58->GetYaxis()->SetTitleOffset(1.1);
   h__58->GetYaxis()->SetTitleFont(42);
   h__58->GetZaxis()->SetLabelFont(42);
   h__58->GetZaxis()->SetTitleOffset(1);
   h__58->GetZaxis()->SetTitleFont(42);
   h__58->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("-0.0146
#pm0.0004
");
   pt_LaTex = pt->AddText("0.011
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
