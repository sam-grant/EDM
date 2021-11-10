void S12S18_g2_delta_prime_hist_1000_825-2375MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__36 = new TH1D("h__36","S12S18_",20,-0.1939129,0.2156668);
   h__36->SetBinContent(10,76);
   h__36->SetBinContent(11,921);
   h__36->SetBinContent(12,3);
   h__36->SetEntries(1000);
   h__36->SetStats(0);
   h__36->SetLineWidth(3);
   h__36->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__36->GetXaxis()->CenterTitle(true);
   h__36->GetXaxis()->SetLabelFont(42);
   h__36->GetXaxis()->SetTitleSize(0.04);
   h__36->GetXaxis()->SetTitleOffset(1.1);
   h__36->GetXaxis()->SetTitleFont(42);
   h__36->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__36->GetYaxis()->CenterTitle(true);
   h__36->GetYaxis()->SetNdivisions(4000510);
   h__36->GetYaxis()->SetLabelFont(42);
   h__36->GetYaxis()->SetTitleSize(0.04);
   h__36->GetYaxis()->SetTitleOffset(1.1);
   h__36->GetYaxis()->SetTitleFont(42);
   h__36->GetZaxis()->SetLabelFont(42);
   h__36->GetZaxis()->SetTitleOffset(1);
   h__36->GetZaxis()->SetTitleFont(42);
   h__36->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.01792
#pm0.0002
");
   pt_LaTex = pt->AddText("0.005
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
