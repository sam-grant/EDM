void S12_g2_delta_prime_hist_1000_750-2750MeV_Run-1c_250MeV_BQ_noVertCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:13:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__16 = new TH1D("h__16","S12",20,-0.1782277,0.2220535);
   h__16->SetBinContent(10,463);
   h__16->SetBinContent(11,537);
   h__16->SetEntries(1000);
   h__16->SetStats(0);
   h__16->SetLineWidth(3);
   h__16->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__16->GetXaxis()->CenterTitle(true);
   h__16->GetXaxis()->SetLabelFont(42);
   h__16->GetXaxis()->SetTitleSize(0.04);
   h__16->GetXaxis()->SetTitleOffset(1.1);
   h__16->GetXaxis()->SetTitleFont(42);
   h__16->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__16->GetYaxis()->CenterTitle(true);
   h__16->GetYaxis()->SetNdivisions(4000510);
   h__16->GetYaxis()->SetLabelFont(42);
   h__16->GetYaxis()->SetTitleSize(0.04);
   h__16->GetYaxis()->SetTitleOffset(1.1);
   h__16->GetYaxis()->SetTitleFont(42);
   h__16->GetZaxis()->SetLabelFont(42);
   h__16->GetZaxis()->SetTitleOffset(1);
   h__16->GetZaxis()->SetTitleFont(42);
   h__16->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.02198
#pm1e-05
");
   pt_LaTex = pt->AddText("0.00044
#pm1e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
