void S18_g2_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__12 = new TH1D("h__12","",55,-0.2305325,0.8710692);
   h__12->SetBinContent(18,1);
   h__12->SetBinContent(19,1);
   h__12->SetBinContent(20,9);
   h__12->SetBinContent(21,21);
   h__12->SetBinContent(22,52);
   h__12->SetBinContent(23,107);
   h__12->SetBinContent(24,134);
   h__12->SetBinContent(25,153);
   h__12->SetBinContent(26,173);
   h__12->SetBinContent(27,125);
   h__12->SetBinContent(28,95);
   h__12->SetBinContent(29,50);
   h__12->SetBinContent(30,42);
   h__12->SetBinContent(31,24);
   h__12->SetBinContent(32,6);
   h__12->SetBinContent(33,2);
   h__12->SetBinContent(34,4);
   h__12->SetBinContent(37,1);
   h__12->SetEntries(1000);
   h__12->SetStats(0);
   h__12->SetLineWidth(3);
   h__12->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__12->GetXaxis()->CenterTitle(true);
   h__12->GetXaxis()->SetLabelFont(42);
   h__12->GetXaxis()->SetTitleSize(0.04);
   h__12->GetXaxis()->SetTitleOffset(1.1);
   h__12->GetXaxis()->SetTitleFont(42);
   h__12->GetYaxis()->SetTitle("Trials");
   h__12->GetYaxis()->CenterTitle(true);
   h__12->GetYaxis()->SetNdivisions(4000510);
   h__12->GetYaxis()->SetLabelFont(42);
   h__12->GetYaxis()->SetTitleSize(0.04);
   h__12->GetYaxis()->SetTitleOffset(1.1);
   h__12->GetYaxis()->SetTitleFont(42);
   h__12->GetZaxis()->SetLabelFont(42);
   h__12->GetZaxis()->SetTitleOffset(1);
   h__12->GetZaxis()->SetTitleFont(42);
   h__12->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.275
#pm0.002
");
   pt_LaTex = pt->AddText("0.05
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
