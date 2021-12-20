void BrErr_250()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__29 = new TH1D("__29","Number of sub-runs: 250",2000,0,1);
   __29->SetBinContent(396,1);
   __29->SetBinContent(399,1);
   __29->SetBinContent(400,5);
   __29->SetBinContent(401,20);
   __29->SetBinContent(402,34);
   __29->SetBinContent(403,70);
   __29->SetBinContent(404,103);
   __29->SetBinContent(405,143);
   __29->SetBinContent(406,153);
   __29->SetBinContent(407,152);
   __29->SetBinContent(408,120);
   __29->SetBinContent(409,90);
   __29->SetBinContent(410,50);
   __29->SetBinContent(411,38);
   __29->SetBinContent(412,14);
   __29->SetBinContent(413,4);
   __29->SetBinContent(415,2);
   __29->SetEntries(1000);
   __29->SetStats(0);
   __29->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __29->GetXaxis()->SetRange(376,437);
   __29->GetXaxis()->CenterTitle(true);
   __29->GetXaxis()->SetLabelFont(42);
   __29->GetXaxis()->SetTitleSize(0.04);
   __29->GetXaxis()->SetTitleOffset(1.1);
   __29->GetXaxis()->SetTitleFont(42);
   __29->GetYaxis()->SetTitle("Trials");
   __29->GetYaxis()->CenterTitle(true);
   __29->GetYaxis()->SetNdivisions(4000510);
   __29->GetYaxis()->SetLabelFont(42);
   __29->GetYaxis()->SetTitleSize(0.04);
   __29->GetYaxis()->SetTitleOffset(1.1);
   __29->GetYaxis()->SetTitleFont(42);
   __29->GetZaxis()->SetLabelFont(42);
   __29->GetZaxis()->SetTitleOffset(1);
   __29->GetZaxis()->SetTitleFont(42);
   __29->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.2
#pm4e-05
");
   pt_LaTex = pt->AddText("0.00127
#pm3e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
