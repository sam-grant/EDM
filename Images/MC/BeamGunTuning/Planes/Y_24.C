void Y_24()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 16 13:12:27 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y_24__51 = new TH1F("Y_24__51","Plane 24",100,-100,100);
   Y_24__51->SetBinContent(33,1);
   Y_24__51->SetBinContent(41,5);
   Y_24__51->SetBinContent(42,13);
   Y_24__51->SetBinContent(43,32);
   Y_24__51->SetBinContent(44,21);
   Y_24__51->SetBinContent(45,17);
   Y_24__51->SetBinContent(46,13);
   Y_24__51->SetBinContent(47,13);
   Y_24__51->SetBinContent(48,14);
   Y_24__51->SetBinContent(49,38);
   Y_24__51->SetBinContent(50,81);
   Y_24__51->SetBinContent(51,42);
   Y_24__51->SetBinContent(52,13);
   Y_24__51->SetBinContent(53,12);
   Y_24__51->SetBinContent(54,9);
   Y_24__51->SetBinContent(55,12);
   Y_24__51->SetBinContent(56,15);
   Y_24__51->SetBinContent(57,19);
   Y_24__51->SetBinContent(58,30);
   Y_24__51->SetBinContent(59,25);
   Y_24__51->SetBinContent(66,1);
   Y_24__51->SetBinContent(68,1);
   Y_24__51->SetBinContent(70,1);
   Y_24__51->SetBinContent(75,1);
   Y_24__51->SetEntries(429);
   Y_24__51->SetLineWidth(3);
   Y_24__51->GetXaxis()->SetTitle("Y [mm]");
   Y_24__51->GetXaxis()->CenterTitle(true);
   Y_24__51->GetXaxis()->SetLabelFont(42);
   Y_24__51->GetXaxis()->SetTitleSize(0.04);
   Y_24__51->GetXaxis()->SetTitleOffset(1.1);
   Y_24__51->GetXaxis()->SetTitleFont(42);
   Y_24__51->GetYaxis()->SetTitle("Ghost tracks");
   Y_24__51->GetYaxis()->CenterTitle(true);
   Y_24__51->GetYaxis()->SetNdivisions(4000510);
   Y_24__51->GetYaxis()->SetLabelFont(42);
   Y_24__51->GetYaxis()->SetTitleSize(0.04);
   Y_24__51->GetYaxis()->SetTitleOffset(1.1);
   Y_24__51->GetYaxis()->SetTitleFont(42);
   Y_24__51->GetZaxis()->SetLabelFont(42);
   Y_24__51->GetZaxis()->SetTitleOffset(1);
   Y_24__51->GetZaxis()->SetTitleFont(42);
   Y_24__51->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
