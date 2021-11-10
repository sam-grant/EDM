void S12_g2_delta_prime_hist_1000_900-2250MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:08:20 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__46 = new TH1D("h__46","S12_",20,-0.1882107,0.218279);
   h__46->SetBinContent(10,35);
   h__46->SetBinContent(11,965);
   h__46->SetEntries(1000);
   h__46->SetStats(0);
   h__46->SetLineWidth(3);
   h__46->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__46->GetXaxis()->CenterTitle(true);
   h__46->GetXaxis()->SetLabelFont(42);
   h__46->GetXaxis()->SetTitleSize(0.04);
   h__46->GetXaxis()->SetTitleOffset(1.1);
   h__46->GetXaxis()->SetTitleFont(42);
   h__46->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__46->GetYaxis()->CenterTitle(true);
   h__46->GetYaxis()->SetNdivisions(4000510);
   h__46->GetYaxis()->SetLabelFont(42);
   h__46->GetYaxis()->SetTitleSize(0.04);
   h__46->GetYaxis()->SetTitleOffset(1.1);
   h__46->GetYaxis()->SetTitleFont(42);
   h__46->GetZaxis()->SetLabelFont(42);
   h__46->GetZaxis()->SetTitleOffset(1);
   h__46->GetZaxis()->SetTitleFont(42);
   h__46->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.02194
#pm0.0001
");
   pt_LaTex = pt->AddText("0.004
#pm9e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
