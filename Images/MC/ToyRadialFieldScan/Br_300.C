void Br_300()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__34 = new TH1D("__34","Number of sub-runs: 300",1000,0,20);
   __34->SetBinContent(359,1);
   __34->SetBinContent(366,1);
   __34->SetBinContent(369,3);
   __34->SetBinContent(370,2);
   __34->SetBinContent(371,1);
   __34->SetBinContent(372,1);
   __34->SetBinContent(373,2);
   __34->SetBinContent(374,3);
   __34->SetBinContent(375,4);
   __34->SetBinContent(376,3);
   __34->SetBinContent(377,3);
   __34->SetBinContent(378,6);
   __34->SetBinContent(379,2);
   __34->SetBinContent(380,2);
   __34->SetBinContent(381,9);
   __34->SetBinContent(382,9);
   __34->SetBinContent(383,8);
   __34->SetBinContent(384,13);
   __34->SetBinContent(385,13);
   __34->SetBinContent(386,10);
   __34->SetBinContent(387,14);
   __34->SetBinContent(388,22);
   __34->SetBinContent(389,20);
   __34->SetBinContent(390,27);
   __34->SetBinContent(391,30);
   __34->SetBinContent(392,24);
   __34->SetBinContent(393,24);
   __34->SetBinContent(394,22);
   __34->SetBinContent(395,32);
   __34->SetBinContent(396,39);
   __34->SetBinContent(397,39);
   __34->SetBinContent(398,24);
   __34->SetBinContent(399,36);
   __34->SetBinContent(400,35);
   __34->SetBinContent(401,28);
   __34->SetBinContent(402,35);
   __34->SetBinContent(403,38);
   __34->SetBinContent(404,38);
   __34->SetBinContent(405,29);
   __34->SetBinContent(406,29);
   __34->SetBinContent(407,43);
   __34->SetBinContent(408,28);
   __34->SetBinContent(409,23);
   __34->SetBinContent(410,24);
   __34->SetBinContent(411,22);
   __34->SetBinContent(412,24);
   __34->SetBinContent(413,21);
   __34->SetBinContent(414,18);
   __34->SetBinContent(415,16);
   __34->SetBinContent(416,19);
   __34->SetBinContent(417,16);
   __34->SetBinContent(418,13);
   __34->SetBinContent(419,11);
   __34->SetBinContent(420,5);
   __34->SetBinContent(421,8);
   __34->SetBinContent(422,2);
   __34->SetBinContent(423,1);
   __34->SetBinContent(424,3);
   __34->SetBinContent(425,5);
   __34->SetBinContent(426,3);
   __34->SetBinContent(427,4);
   __34->SetBinContent(428,1);
   __34->SetBinContent(429,3);
   __34->SetBinContent(431,1);
   __34->SetBinContent(433,2);
   __34->SetBinContent(434,1);
   __34->SetBinContent(438,1);
   __34->SetBinContent(444,1);
   __34->SetEntries(1000);
   __34->SetStats(0);
   __34->GetXaxis()->SetTitle("B_{r} [ppm]");
   __34->GetXaxis()->SetRange(207,595);
   __34->GetXaxis()->CenterTitle(true);
   __34->GetXaxis()->SetLabelFont(42);
   __34->GetXaxis()->SetTitleSize(0.04);
   __34->GetXaxis()->SetTitleOffset(1.1);
   __34->GetXaxis()->SetTitleFont(42);
   __34->GetYaxis()->SetTitle("Trials / 0.020000 ppm");
   __34->GetYaxis()->CenterTitle(true);
   __34->GetYaxis()->SetNdivisions(4000510);
   __34->GetYaxis()->SetLabelFont(42);
   __34->GetYaxis()->SetTitleSize(0.04);
   __34->GetYaxis()->SetTitleOffset(1.1);
   __34->GetYaxis()->SetTitleFont(42);
   __34->GetZaxis()->SetLabelFont(42);
   __34->GetZaxis()->SetTitleOffset(1);
   __34->GetZaxis()->SetTitleFont(42);
   __34->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("8.01
#pm0.007
");
   pt_LaTex = pt->AddText("0.229
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
