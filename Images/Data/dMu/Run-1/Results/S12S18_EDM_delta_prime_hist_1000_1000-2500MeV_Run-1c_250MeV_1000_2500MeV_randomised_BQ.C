#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1c_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Aug 30 13:18:20 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__9 = new TH1D("h__9","S12S18",30,0.303378,0.60432);
   h__9->SetBinContent(15,625);
   h__9->SetBinContent(16,375);
   h__9->SetEntries(1000);
   h__9->SetStats(0);
   h__9->SetLineWidth(3);
   h__9->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__9->GetXaxis()->CenterTitle(true);
   h__9->GetXaxis()->SetLabelFont(42);
   h__9->GetXaxis()->SetTitleSize(0.04);
   h__9->GetXaxis()->SetTitleOffset(1.1);
   h__9->GetXaxis()->SetTitleFont(42);
   h__9->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__9->GetYaxis()->CenterTitle(true);
   h__9->GetYaxis()->SetNdivisions(4000510);
   h__9->GetYaxis()->SetLabelFont(42);
   h__9->GetYaxis()->SetTitleSize(0.04);
   h__9->GetYaxis()->SetTitleOffset(1.1);
   h__9->GetYaxis()->SetTitleFont(42);
   h__9->GetZaxis()->SetLabelFont(42);
   h__9->GetZaxis()->SetTitleOffset(1);
   h__9->GetZaxis()->SetTitleFont(42);
   h__9->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.4536
#pm2e-05
");
   pt_LaTex = pt->AddText("0.000685
#pm2e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
