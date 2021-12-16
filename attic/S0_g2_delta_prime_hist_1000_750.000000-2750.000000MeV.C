void S0_g2_delta_prime_hist_1000_750.000000-2750.000000MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:21:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__12 = new TH1D("h__12","",51,-0.2066417,0.8176111);
   h__12->SetBinContent(22,20);
   h__12->SetBinContent(23,110);
   h__12->SetBinContent(24,238);
   h__12->SetBinContent(25,289);
   h__12->SetBinContent(26,194);
   h__12->SetBinContent(27,106);
   h__12->SetBinContent(28,36);
   h__12->SetBinContent(29,7);
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
   pt_LaTex = pt->AddText("0.2857
#pm0.0009
");
   pt_LaTex = pt->AddText("0.027
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
