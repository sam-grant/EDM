void S0S12S18_EDM_delta_prime_hist_1000_750-2750MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:12:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__65 = new TH1D("h__65","",61,1.068184,2.290663);
   h__65->SetBinContent(20,1);
   h__65->SetBinContent(21,1);
   h__65->SetBinContent(22,3);
   h__65->SetBinContent(23,7);
   h__65->SetBinContent(24,10);
   h__65->SetBinContent(25,28);
   h__65->SetBinContent(26,38);
   h__65->SetBinContent(27,54);
   h__65->SetBinContent(28,67);
   h__65->SetBinContent(29,91);
   h__65->SetBinContent(30,88);
   h__65->SetBinContent(31,99);
   h__65->SetBinContent(32,115);
   h__65->SetBinContent(33,102);
   h__65->SetBinContent(34,78);
   h__65->SetBinContent(35,64);
   h__65->SetBinContent(36,47);
   h__65->SetBinContent(37,28);
   h__65->SetBinContent(38,35);
   h__65->SetBinContent(39,20);
   h__65->SetBinContent(40,8);
   h__65->SetBinContent(41,8);
   h__65->SetBinContent(42,3);
   h__65->SetBinContent(43,1);
   h__65->SetBinContent(45,1);
   h__65->SetBinContent(46,1);
   h__65->SetBinContent(47,1);
   h__65->SetBinContent(49,1);
   h__65->SetEntries(1000);
   h__65->SetStats(0);
   h__65->SetLineWidth(3);
   h__65->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__65->GetXaxis()->CenterTitle(true);
   h__65->GetXaxis()->SetLabelFont(42);
   h__65->GetXaxis()->SetTitleSize(0.04);
   h__65->GetXaxis()->SetTitleOffset(1.1);
   h__65->GetXaxis()->SetTitleFont(42);
   h__65->GetYaxis()->SetTitle("Trials");
   h__65->GetYaxis()->CenterTitle(true);
   h__65->GetYaxis()->SetNdivisions(4000510);
   h__65->GetYaxis()->SetLabelFont(42);
   h__65->GetYaxis()->SetTitleSize(0.04);
   h__65->GetYaxis()->SetTitleOffset(1.1);
   h__65->GetYaxis()->SetTitleFont(42);
   h__65->GetZaxis()->SetLabelFont(42);
   h__65->GetZaxis()->SetTitleOffset(1);
   h__65->GetZaxis()->SetTitleFont(42);
   h__65->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.692
#pm0.002
");
   pt_LaTex = pt->AddText("0.078
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
