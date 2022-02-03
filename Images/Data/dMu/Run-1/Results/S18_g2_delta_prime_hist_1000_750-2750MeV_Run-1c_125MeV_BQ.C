void S18_g2_delta_prime_hist_1000_750-2750MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:53:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__17 = new TH1D("h__17","S18",20,-0.2627189,0.1550871);
   h__17->SetBinContent(0,5);
   h__17->SetBinContent(1,1);
   h__17->SetBinContent(2,7);
   h__17->SetBinContent(3,7);
   h__17->SetBinContent(4,8);
   h__17->SetBinContent(5,11);
   h__17->SetBinContent(6,5);
   h__17->SetBinContent(7,9);
   h__17->SetBinContent(8,5);
   h__17->SetBinContent(9,61);
   h__17->SetBinContent(10,357);
   h__17->SetBinContent(11,96);
   h__17->SetBinContent(12,43);
   h__17->SetBinContent(13,31);
   h__17->SetBinContent(14,21);
   h__17->SetBinContent(15,16);
   h__17->SetBinContent(16,19);
   h__17->SetBinContent(17,19);
   h__17->SetBinContent(18,18);
   h__17->SetBinContent(19,34);
   h__17->SetBinContent(20,26);
   h__17->SetBinContent(21,201);
   h__17->SetEntries(1000);
   h__17->SetStats(0);
   h__17->SetLineWidth(3);
   h__17->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__17->GetXaxis()->CenterTitle(true);
   h__17->GetXaxis()->SetLabelFont(42);
   h__17->GetXaxis()->SetTitleSize(0.04);
   h__17->GetXaxis()->SetTitleOffset(1.1);
   h__17->GetXaxis()->SetTitleFont(42);
   h__17->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__17->GetYaxis()->CenterTitle(true);
   h__17->GetYaxis()->SetNdivisions(4000510);
   h__17->GetYaxis()->SetLabelFont(42);
   h__17->GetYaxis()->SetTitleSize(0.04);
   h__17->GetYaxis()->SetTitleOffset(1.1);
   h__17->GetYaxis()->SetTitleFont(42);
   h__17->GetZaxis()->SetLabelFont(42);
   h__17->GetZaxis()->SetTitleOffset(1);
   h__17->GetZaxis()->SetTitleFont(42);
   h__17->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.03613
#pm0.003
");
   pt_LaTex = pt->AddText("0.072
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
