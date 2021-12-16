void S18_EDM_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:03 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__25 = new TH1D("h__25","",71,0.9990038,2.422599);
   h__25->SetBinContent(18,1);
   h__25->SetBinContent(23,1);
   h__25->SetBinContent(24,4);
   h__25->SetBinContent(25,6);
   h__25->SetBinContent(26,8);
   h__25->SetBinContent(27,9);
   h__25->SetBinContent(28,20);
   h__25->SetBinContent(29,33);
   h__25->SetBinContent(30,37);
   h__25->SetBinContent(31,46);
   h__25->SetBinContent(32,48);
   h__25->SetBinContent(33,64);
   h__25->SetBinContent(34,71);
   h__25->SetBinContent(35,61);
   h__25->SetBinContent(36,73);
   h__25->SetBinContent(37,59);
   h__25->SetBinContent(38,72);
   h__25->SetBinContent(39,56);
   h__25->SetBinContent(40,45);
   h__25->SetBinContent(41,49);
   h__25->SetBinContent(42,40);
   h__25->SetBinContent(43,34);
   h__25->SetBinContent(44,27);
   h__25->SetBinContent(45,20);
   h__25->SetBinContent(46,25);
   h__25->SetBinContent(47,15);
   h__25->SetBinContent(48,16);
   h__25->SetBinContent(49,10);
   h__25->SetBinContent(50,8);
   h__25->SetBinContent(51,9);
   h__25->SetBinContent(52,7);
   h__25->SetBinContent(53,6);
   h__25->SetBinContent(54,3);
   h__25->SetBinContent(55,6);
   h__25->SetBinContent(57,1);
   h__25->SetBinContent(58,3);
   h__25->SetBinContent(59,2);
   h__25->SetBinContent(61,1);
   h__25->SetBinContent(65,1);
   h__25->SetBinContent(68,1);
   h__25->SetBinContent(72,2);
   h__25->SetEntries(1000);
   h__25->SetStats(0);
   h__25->SetLineWidth(3);
   h__25->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__25->GetXaxis()->CenterTitle(true);
   h__25->GetXaxis()->SetLabelFont(42);
   h__25->GetXaxis()->SetTitleSize(0.04);
   h__25->GetXaxis()->SetTitleOffset(1.1);
   h__25->GetXaxis()->SetTitleFont(42);
   h__25->GetYaxis()->SetTitle("Trials");
   h__25->GetYaxis()->CenterTitle(true);
   h__25->GetYaxis()->SetNdivisions(4000510);
   h__25->GetYaxis()->SetLabelFont(42);
   h__25->GetYaxis()->SetTitleSize(0.04);
   h__25->GetYaxis()->SetTitleOffset(1.1);
   h__25->GetYaxis()->SetTitleFont(42);
   h__25->GetZaxis()->SetLabelFont(42);
   h__25->GetZaxis()->SetTitleOffset(1);
   h__25->GetZaxis()->SetTitleFont(42);
   h__25->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.741
#pm0.004
");
   pt_LaTex = pt->AddText("0.13
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
