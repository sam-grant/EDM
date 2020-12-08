void Y_vs_t()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 23 13:10:18 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH2F *Y_vs_t = new TH2F("Y_vs_t","0ppm_20thTurn",6000,0,893.616,100,-100,100);
   Y_vs_t->SetBinContent(186061,32);
   Y_vs_t->SetBinContent(192063,50);
   Y_vs_t->SetBinContent(198065,72);
   Y_vs_t->SetBinContent(204067,62);
   Y_vs_t->SetBinContent(210069,38);
   Y_vs_t->SetBinContent(216071,52);
   Y_vs_t->SetBinContent(222073,112);
   Y_vs_t->SetBinContent(228075,52);
   Y_vs_t->SetBinContent(234077,52);
   Y_vs_t->SetBinContent(240079,112);
   Y_vs_t->SetBinContent(246081,122);
   Y_vs_t->SetBinContent(252083,148);
   Y_vs_t->SetBinContent(258085,188);
   Y_vs_t->SetBinContent(264087,188);
   Y_vs_t->SetBinContent(270089,168);
   Y_vs_t->SetBinContent(276091,236);
   Y_vs_t->SetBinContent(282093,260);
   Y_vs_t->SetBinContent(288095,244);
   Y_vs_t->SetBinContent(294097,248);
   Y_vs_t->SetBinContent(300099,186);
   Y_vs_t->SetBinContent(306101,232);
   Y_vs_t->SetBinContent(312103,402);
   Y_vs_t->SetBinContent(318105,296);
   Y_vs_t->SetBinContent(324107,216);
   Y_vs_t->SetBinContent(330109,258);
   Y_vs_t->SetBinContent(336111,198);
   Y_vs_t->SetBinContent(342113,200);
   Y_vs_t->SetBinContent(348115,128);
   Y_vs_t->SetBinContent(354117,120);
   Y_vs_t->SetBinContent(360119,178);
   Y_vs_t->SetBinContent(366121,78);
   Y_vs_t->SetBinContent(372123,64);
   Y_vs_t->SetBinContent(378125,54);
   Y_vs_t->SetBinContent(384127,42);
   Y_vs_t->SetEntries(5088);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Y_vs_t->SetLineColor(ci);
   Y_vs_t->GetXaxis()->SetTitle("t [ns]");
   Y_vs_t->GetXaxis()->CenterTitle(true);
   Y_vs_t->GetXaxis()->SetLabelFont(42);
   Y_vs_t->GetXaxis()->SetTitleSize(0.04);
   Y_vs_t->GetXaxis()->SetTitleOffset(1.1);
   Y_vs_t->GetXaxis()->SetTitleFont(42);
   Y_vs_t->GetYaxis()->SetTitle("Y [mm]");
   Y_vs_t->GetYaxis()->CenterTitle(true);
   Y_vs_t->GetYaxis()->SetNdivisions(4000510);
   Y_vs_t->GetYaxis()->SetLabelFont(42);
   Y_vs_t->GetYaxis()->SetTitleSize(0.04);
   Y_vs_t->GetYaxis()->SetTitleOffset(1.1);
   Y_vs_t->GetYaxis()->SetTitleFont(42);
   Y_vs_t->GetZaxis()->SetLabelFont(42);
   Y_vs_t->GetZaxis()->SetTitleOffset(1);
   Y_vs_t->GetZaxis()->SetTitleFont(42);
   Y_vs_t->Draw("COLZ");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
