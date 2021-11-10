void S12_EDM_delta_prime_hist_1000_900-2250MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__31 = new TH1D("h__31","S12_",20,-0.148926,0.2563026);
   h__31->SetBinContent(10,602);
   h__31->SetBinContent(11,398);
   h__31->SetEntries(1000);
   h__31->SetStats(0);
   h__31->SetLineWidth(3);
   h__31->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__31->GetXaxis()->CenterTitle(true);
   h__31->GetXaxis()->SetLabelFont(42);
   h__31->GetXaxis()->SetTitleSize(0.04);
   h__31->GetXaxis()->SetTitleOffset(1.1);
   h__31->GetXaxis()->SetTitleFont(42);
   h__31->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__31->GetYaxis()->CenterTitle(true);
   h__31->GetYaxis()->SetNdivisions(4000510);
   h__31->GetYaxis()->SetLabelFont(42);
   h__31->GetYaxis()->SetTitleSize(0.04);
   h__31->GetYaxis()->SetTitleOffset(1.1);
   h__31->GetYaxis()->SetTitleFont(42);
   h__31->GetZaxis()->SetLabelFont(42);
   h__31->GetZaxis()->SetTitleOffset(1);
   h__31->GetZaxis()->SetTitleFont(42);
   h__31->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.05304
#pm0.0001
");
   pt_LaTex = pt->AddText("0.0033
#pm7e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
