void S18_g2_delta_prime_hist_1000_900-2250MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__29 = new TH1D("h__29","S18_",20,-0.05212711,0.367217);
   h__29->SetBinContent(9,54);
   h__29->SetBinContent(10,655);
   h__29->SetBinContent(11,284);
   h__29->SetBinContent(12,7);
   h__29->SetEntries(1000);
   h__29->SetStats(0);
   h__29->SetLineWidth(3);
   h__29->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__29->GetXaxis()->CenterTitle(true);
   h__29->GetXaxis()->SetLabelFont(42);
   h__29->GetXaxis()->SetTitleSize(0.04);
   h__29->GetXaxis()->SetTitleOffset(1.1);
   h__29->GetXaxis()->SetTitleFont(42);
   h__29->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__29->GetYaxis()->CenterTitle(true);
   h__29->GetYaxis()->SetNdivisions(4000510);
   h__29->GetYaxis()->SetLabelFont(42);
   h__29->GetYaxis()->SetTitleSize(0.04);
   h__29->GetYaxis()->SetTitleOffset(1.1);
   h__29->GetYaxis()->SetTitleFont(42);
   h__29->GetZaxis()->SetLabelFont(42);
   h__29->GetZaxis()->SetTitleOffset(1);
   h__29->GetZaxis()->SetTitleFont(42);
   h__29->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.1527
#pm0.0003
");
   pt_LaTex = pt->AddText("0.01
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
