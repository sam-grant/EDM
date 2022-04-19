void S12S18_g2_delta_prime_hist_1000_750-2750MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:15:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__24 = new TH1D("h__24","S12S18",20,-0.1643429,0.2372049);
   h__24->SetBinContent(10,602);
   h__24->SetBinContent(11,398);
   h__24->SetEntries(1000);
   h__24->SetStats(0);
   h__24->SetLineWidth(3);
   h__24->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__24->GetXaxis()->CenterTitle(true);
   h__24->GetXaxis()->SetLabelFont(42);
   h__24->GetXaxis()->SetTitleSize(0.04);
   h__24->GetXaxis()->SetTitleOffset(1.1);
   h__24->GetXaxis()->SetTitleFont(42);
   h__24->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__24->GetYaxis()->CenterTitle(true);
   h__24->GetYaxis()->SetNdivisions(4000510);
   h__24->GetYaxis()->SetLabelFont(42);
   h__24->GetYaxis()->SetTitleSize(0.04);
   h__24->GetYaxis()->SetTitleOffset(1.1);
   h__24->GetYaxis()->SetTitleFont(42);
   h__24->GetZaxis()->SetLabelFont(42);
   h__24->GetZaxis()->SetTitleOffset(1);
   h__24->GetZaxis()->SetTitleFont(42);
   h__24->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.03605
#pm5e-05
");
   pt_LaTex = pt->AddText("0.0017
#pm4e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
