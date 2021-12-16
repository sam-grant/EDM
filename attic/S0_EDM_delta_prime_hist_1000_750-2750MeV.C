void S0_EDM_delta_prime_hist_1000_750-2750MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:09:49 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__61 = new TH1D("h__61","",63,1.014769,2.289464);
   h__61->SetBinContent(16,1);
   h__61->SetBinContent(18,1);
   h__61->SetBinContent(19,1);
   h__61->SetBinContent(20,2);
   h__61->SetBinContent(21,3);
   h__61->SetBinContent(22,6);
   h__61->SetBinContent(23,14);
   h__61->SetBinContent(24,16);
   h__61->SetBinContent(25,29);
   h__61->SetBinContent(26,40);
   h__61->SetBinContent(27,35);
   h__61->SetBinContent(28,52);
   h__61->SetBinContent(29,49);
   h__61->SetBinContent(30,60);
   h__61->SetBinContent(31,56);
   h__61->SetBinContent(32,66);
   h__61->SetBinContent(33,69);
   h__61->SetBinContent(34,77);
   h__61->SetBinContent(35,70);
   h__61->SetBinContent(36,64);
   h__61->SetBinContent(37,42);
   h__61->SetBinContent(38,63);
   h__61->SetBinContent(39,36);
   h__61->SetBinContent(40,23);
   h__61->SetBinContent(41,27);
   h__61->SetBinContent(42,21);
   h__61->SetBinContent(43,17);
   h__61->SetBinContent(44,13);
   h__61->SetBinContent(45,15);
   h__61->SetBinContent(46,5);
   h__61->SetBinContent(47,6);
   h__61->SetBinContent(48,7);
   h__61->SetBinContent(49,4);
   h__61->SetBinContent(50,4);
   h__61->SetBinContent(51,2);
   h__61->SetBinContent(55,1);
   h__61->SetBinContent(59,2);
   h__61->SetBinContent(62,1);
   h__61->SetEntries(1000);
   h__61->SetStats(0);
   h__61->SetLineWidth(3);
   h__61->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__61->GetXaxis()->CenterTitle(true);
   h__61->GetXaxis()->SetLabelFont(42);
   h__61->GetXaxis()->SetTitleSize(0.04);
   h__61->GetXaxis()->SetTitleOffset(1.1);
   h__61->GetXaxis()->SetTitleFont(42);
   h__61->GetYaxis()->SetTitle("Trials");
   h__61->GetYaxis()->CenterTitle(true);
   h__61->GetYaxis()->SetNdivisions(4000510);
   h__61->GetYaxis()->SetLabelFont(42);
   h__61->GetYaxis()->SetTitleSize(0.04);
   h__61->GetYaxis()->SetTitleOffset(1.1);
   h__61->GetYaxis()->SetTitleFont(42);
   h__61->GetZaxis()->SetLabelFont(42);
   h__61->GetZaxis()->SetTitleOffset(1);
   h__61->GetZaxis()->SetTitleFont(42);
   h__61->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.686
#pm0.004
");
   pt_LaTex = pt->AddText("0.12
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
