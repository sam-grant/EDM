void S18_g2_delta_prime_hist_1000_825-2375MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:04:10 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__47 = new TH1D("h__47","S18_",20,-0.2229746,0.1853807);
   h__47->SetBinContent(10,853);
   h__47->SetBinContent(11,147);
   h__47->SetEntries(1000);
   h__47->SetStats(0);
   h__47->SetLineWidth(3);
   h__47->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__47->GetXaxis()->CenterTitle(true);
   h__47->GetXaxis()->SetLabelFont(42);
   h__47->GetXaxis()->SetTitleSize(0.04);
   h__47->GetXaxis()->SetTitleOffset(1.1);
   h__47->GetXaxis()->SetTitleFont(42);
   h__47->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__47->GetYaxis()->CenterTitle(true);
   h__47->GetYaxis()->SetNdivisions(4000510);
   h__47->GetYaxis()->SetLabelFont(42);
   h__47->GetYaxis()->SetTitleSize(0.04);
   h__47->GetYaxis()->SetTitleOffset(1.1);
   h__47->GetYaxis()->SetTitleFont(42);
   h__47->GetZaxis()->SetLabelFont(42);
   h__47->GetZaxis()->SetTitleOffset(1);
   h__47->GetZaxis()->SetTitleFont(42);
   h__47->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.02227
#pm0.0001
");
   pt_LaTex = pt->AddText("0.0031
#pm7e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
