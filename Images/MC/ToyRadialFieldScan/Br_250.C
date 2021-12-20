void Br_250()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__28 = new TH1D("__28","Number of sub-runs: 250",1000,0,20);
   __28->SetBinContent(369,1);
   __28->SetBinContent(370,1);
   __28->SetBinContent(374,2);
   __28->SetBinContent(375,2);
   __28->SetBinContent(376,2);
   __28->SetBinContent(377,3);
   __28->SetBinContent(378,2);
   __28->SetBinContent(379,4);
   __28->SetBinContent(380,7);
   __28->SetBinContent(381,6);
   __28->SetBinContent(382,9);
   __28->SetBinContent(383,11);
   __28->SetBinContent(384,17);
   __28->SetBinContent(385,11);
   __28->SetBinContent(386,9);
   __28->SetBinContent(387,18);
   __28->SetBinContent(388,19);
   __28->SetBinContent(389,19);
   __28->SetBinContent(390,21);
   __28->SetBinContent(391,23);
   __28->SetBinContent(392,25);
   __28->SetBinContent(393,34);
   __28->SetBinContent(394,34);
   __28->SetBinContent(395,37);
   __28->SetBinContent(396,33);
   __28->SetBinContent(397,38);
   __28->SetBinContent(398,35);
   __28->SetBinContent(399,34);
   __28->SetBinContent(400,41);
   __28->SetBinContent(401,44);
   __28->SetBinContent(402,37);
   __28->SetBinContent(403,45);
   __28->SetBinContent(404,41);
   __28->SetBinContent(405,31);
   __28->SetBinContent(406,41);
   __28->SetBinContent(407,28);
   __28->SetBinContent(408,27);
   __28->SetBinContent(409,22);
   __28->SetBinContent(410,29);
   __28->SetBinContent(411,13);
   __28->SetBinContent(412,21);
   __28->SetBinContent(413,16);
   __28->SetBinContent(414,13);
   __28->SetBinContent(415,19);
   __28->SetBinContent(416,10);
   __28->SetBinContent(417,22);
   __28->SetBinContent(418,7);
   __28->SetBinContent(419,7);
   __28->SetBinContent(420,3);
   __28->SetBinContent(421,5);
   __28->SetBinContent(422,5);
   __28->SetBinContent(423,6);
   __28->SetBinContent(424,3);
   __28->SetBinContent(425,2);
   __28->SetBinContent(426,1);
   __28->SetBinContent(427,1);
   __28->SetBinContent(429,1);
   __28->SetBinContent(430,2);
   __28->SetEntries(1000);
   __28->SetStats(0);
   __28->GetXaxis()->SetTitle("B_{r} [ppm]");
   __28->GetXaxis()->SetRange(278,522);
   __28->GetXaxis()->CenterTitle(true);
   __28->GetXaxis()->SetLabelFont(42);
   __28->GetXaxis()->SetTitleSize(0.04);
   __28->GetXaxis()->SetTitleOffset(1.1);
   __28->GetXaxis()->SetTitleFont(42);
   __28->GetYaxis()->SetTitle("Trials");
   __28->GetYaxis()->CenterTitle(true);
   __28->GetYaxis()->SetNdivisions(4000510);
   __28->GetYaxis()->SetLabelFont(42);
   __28->GetYaxis()->SetTitleSize(0.04);
   __28->GetYaxis()->SetTitleOffset(1.1);
   __28->GetYaxis()->SetTitleFont(42);
   __28->GetZaxis()->SetLabelFont(42);
   __28->GetZaxis()->SetTitleOffset(1);
   __28->GetZaxis()->SetTitleFont(42);
   __28->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("8
#pm0.006
");
   pt_LaTex = pt->AddText("0.203
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
